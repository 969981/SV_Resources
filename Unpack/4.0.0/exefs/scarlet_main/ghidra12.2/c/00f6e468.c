/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f6e468; name: FUN_00f6e468
 */


void FUN_00f6e468(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  undefined2 local_70;
  undefined1 local_6e;
  byte local_68 [8];
  long *local_60 [4];
  undefined8 local_40;
  int local_38 [2];
  
  if (((*(char *)(param_1 + 0x68) != '\0') ||
      ((*(long *)(param_1 + 0x50) != 0 && (*(short *)(*(long *)(param_1 + 0x50) + 0x1a) != 0)))) &&
     ((plVar3 = *(long **)(param_1 + 0x60), plVar3 != (long *)0x0 &&
      (local_40 = param_2, uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,&local_40),
      (uVar2 & 0xff) != 0xfd)))) {
    FUN_01267a34(local_60,param_3,param_4);
    local_68[0] = 0;
    if ((((local_60[0] != (long *)0x0) &&
         (cVar1 = *(char *)(*local_60[0] + local_60[0][2]), local_60[0][2] = local_60[0][2] + 1,
         cVar1 == -0x47)) && (FUN_00f6f118(local_38,local_68), local_38[0] == 0)) &&
       (uVar4 = (uint)local_68[0], local_68[0] != 0)) {
      do {
        local_70 = 0;
        local_6e = 0;
        if (((local_60[0] != (long *)0x0) &&
            (cVar1 = *(char *)(*local_60[0] + local_60[0][2]), local_60[0][2] = local_60[0][2] + 1,
            cVar1 == -0x47)) && (FUN_00f6e5a0(local_38,&local_70), local_38[0] == 0)) {
          FUN_00f6e7e8(param_1,uVar2,&local_70);
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    FUN_01267b4c(local_60);
  }
  return;
}


