/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02912038; name: FUN_02912038
 */


undefined8 FUN_02912038(long param_1)

{
  char cVar1;
  ulong uVar2;
  char cVar3;
  
  if (*(short *)(param_1 + 0x9c) == 0x288) {
    cVar3 = *(char *)(param_1 + 0xa1);
    if (cVar3 == '\r') {
      cVar3 = *(char *)(param_1 + 0xb8);
      if ((((cVar3 == '\x06') || (cVar3 == '\x10')) || (*(char *)(param_1 + 0xb9) == '\x10')) ||
         (*(char *)(param_1 + 0xb9) == '\x06')) {
        uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
        if ((uVar2 & 1) != 0) {
          return 2;
        }
        cVar3 = *(char *)(param_1 + 0xb8);
      }
      if (((((cVar3 == '\x01') || (cVar1 = *(char *)(param_1 + 0xb9), cVar1 == '\r')) ||
           ((cVar3 == '\r' || ((cVar1 == '\b' || (cVar3 == '\b')))))) || (cVar1 == '\x01')) &&
         (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x4e), (uVar2 & 1) != 0)) {
        return 0xfffffffe;
      }
      cVar3 = *(char *)(param_1 + 0xa1);
    }
    if (cVar3 != '\x01') {
      return 0;
    }
    cVar3 = *(char *)(param_1 + 0xb8);
    if ((cVar3 == '\r') || (*(char *)(param_1 + 0xb9) == '\r')) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      if ((uVar2 & 1) != 0) {
        return 2;
      }
      cVar3 = *(char *)(param_1 + 0xb8);
    }
    if ((((cVar3 == '\x01') || (cVar3 == '\b')) || (*(char *)(param_1 + 0xb9) == '\b')) ||
       (*(char *)(param_1 + 0xb9) == '\x01')) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      if ((uVar2 & 1) != 0) {
        return 2;
      }
      cVar3 = *(char *)(param_1 + 0xb8);
    }
    if ((((cVar3 == '\x06') || (cVar3 == '\x10')) ||
        ((*(char *)(param_1 + 0xb9) == '\x10' || (*(char *)(param_1 + 0xb9) == '\x06')))) &&
       (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
       (uVar2 & 1) != 0)) {
      return 0xfffffffe;
    }
  }
  return 0;
}


