/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351389c; name: ~SystemEvent
 */


/* nn::os::SystemEvent::~SystemEvent() */

void __thiscall nn::os::SystemEvent::~SystemEvent(SystemEvent *this)

{
  if (this[0x28] == (SystemEvent)0x0) {
    return;
  }
  nn::os::DestroySystemEvent((SystemEventType *)this);
  return;
}


