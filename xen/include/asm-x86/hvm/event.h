/*
 * event.h: Hardware virtual machine assist events.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place - Suite 330, Boston, MA 02111-1307 USA.
 */

#ifndef __ASM_X86_HVM_EVENT_H__
#define __ASM_X86_HVM_EVENT_H__

/* Called for current VCPU on crX/MSR changes by guest */
void hvm_event_cr0(unsigned long value, unsigned long old);
void hvm_event_cr3(unsigned long value, unsigned long old);
void hvm_event_cr4(unsigned long value, unsigned long old);
void hvm_event_msr(unsigned int msr, uint64_t value);
/* Called for current VCPU: returns -1 if no listener */
int hvm_event_int3(unsigned long gla);
int hvm_event_single_step(unsigned long gla);

#endif /* __ASM_X86_HVM_EVENT_H__ */

/*
 * Local variables:
 * mode: C
 * c-file-style: "BSD"
 * c-basic-offset: 4
 * tab-width: 4
 * indent-tabs-mode: nil
 * End:
 */
