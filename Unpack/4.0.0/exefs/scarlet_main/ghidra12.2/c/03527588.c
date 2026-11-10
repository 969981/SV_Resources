/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03527588; name: FUN_03527588
 */


void FUN_03527588(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_38;
  undefined1 local_30;
  long *local_28;
  
  bVar1 = *(byte *)(param_1 + 0x5a);
  if (((bVar1 & 1) != 0) || ((bVar1 & 0xf) == 0)) {
    if ((*(byte *)(param_1 + 0xc0) & 1) != 0) {
      local_38 = 0;
      local_30 = 0;
      *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
      if ((bVar1 & 0xe) == 0) {
        uVar2 = FUN_03527670(param_1);
        local_28 = (long *)FUN_03527714(param_1,uVar2);
        if ((local_28 != (long *)0x0) &&
           (FUN_035279f0(param_1,uVar2,&local_38,&local_28), local_28 != (long *)0x0)) {
          (**(code **)(*local_28 + 0x80))();
        }
      }
    }
    if (**(long **)(param_1 + 0xa0) == 0) {
      lVar3 = param_1;
      do {
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 == 0) {
          for (plVar4 = *(long **)(param_1 + 0x98); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4)
          {
            if ((long *)plVar4[1] != (long *)0x0) {
              (**(code **)(*(long *)plVar4[1] + 0xe8))();
            }
          }
          return;
        }
      } while (**(long **)(lVar3 + 0xa0) == 0);
    }
  }
  return;
}


