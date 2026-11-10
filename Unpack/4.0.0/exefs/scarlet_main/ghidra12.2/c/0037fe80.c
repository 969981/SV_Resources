/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0037fe80; name: FUN_0037fe80
 */


undefined8 FUN_0037fe80(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) &&
      (*(code **)(param_1 + 0x48) != (code *)0x0)) &&
     (((plVar3 = *(long **)(param_1 + 0x38), plVar3 != (long *)0x0 && (*plVar3 == param_1)) &&
      ((int)plVar3[1] - 0x3f34U < 0x20)))) {
    if ((int)param_2 < 0) {
      iVar4 = 0;
      uVar5 = -param_2;
    }
    else {
      iVar4 = (param_2 >> 4) + 5;
      uVar5 = param_2 & 0xf;
      if (0x2f < (int)param_2) {
        uVar5 = param_2;
      }
    }
    if ((uVar5 == 0) || ((uVar5 & 0xfffffff8) == 8)) {
      if ((plVar3[9] == 0) || (*(uint *)(plVar3 + 7) == uVar5)) {
        *(int *)(plVar3 + 2) = iVar4;
        *(uint *)(plVar3 + 7) = uVar5;
      }
      else {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50));
        plVar3[9] = 0;
        lVar2 = *(long *)(param_1 + 0x40);
        *(int *)(plVar3 + 2) = iVar4;
        *(uint *)(plVar3 + 7) = uVar5;
        if (lVar2 == 0) {
          return 0xfffffffe;
        }
      }
      if ((((*(long *)(param_1 + 0x48) != 0) &&
           (plVar3 = *(long **)(param_1 + 0x38), plVar3 != (long *)0x0)) && (*plVar3 == param_1)) &&
         ((int)plVar3[1] - 0x3f34U < 0x20)) {
        plVar3[8] = 0;
        *(undefined4 *)((long)plVar3 + 0x3c) = 0;
        plVar3[5] = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        if (*(uint *)(plVar3 + 2) != 0) {
          *(ulong *)(param_1 + 0x60) = (ulong)*(uint *)(plVar3 + 2) & 1;
        }
        *(undefined4 *)((long)plVar3 + 0x1c) = 0x8000;
        lVar2 = DAT_03cb5440;
        plVar1 = plVar3 + 0xab;
        plVar3[0x12] = (long)plVar1;
        plVar3[0xd] = (long)plVar1;
        plVar3[0xe] = (long)plVar1;
        *(undefined4 *)((long)plVar3 + 0x14) = 0;
        plVar3[6] = 0;
        plVar3[10] = 0;
        *(undefined4 *)(plVar3 + 0xb) = 0;
        plVar3[1] = lVar2;
        plVar3[0x37d] = DAT_03cb54f8;
        return 0;
      }
    }
  }
  return 0xfffffffe;
}


