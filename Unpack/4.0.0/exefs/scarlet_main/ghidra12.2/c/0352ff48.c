/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0352ff48; name: FUN_0352ff48
 */


undefined8 FUN_0352ff48(long *param_1,int param_2,long *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_3 + 1);
  uVar6 = *(uint *)((long)param_3 + 0xc);
  if (uVar6 <= uVar1) {
    iVar2 = uVar6 + (uVar6 >> 1);
    if (uVar6 == 0) {
      iVar2 = 1;
    }
    uVar6 = iVar2 + uVar6;
    lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_3,(ulong)uVar6 << 3);
    if (lVar3 == 0) {
      return 2;
    }
    *param_3 = lVar3;
    *(uint *)((long)param_3 + 0xc) = uVar6;
  }
  if (uVar6 <= uVar1) {
    return 2;
  }
  uVar6 = *(uint *)(param_3 + 1);
  *(uint *)(param_3 + 1) = uVar6 + 1;
  if (*param_3 == 0) {
    return 2;
  }
  *(long **)(*param_3 + (ulong)uVar6 * 8) = param_1;
  if ((int)param_1[2] == param_2) {
    *param_4 = '\x01';
    return 1;
  }
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((uVar4 & 1) == 0) {
    if (*param_4 != '\0') {
      return 1;
    }
    if ((int)param_1[5] != 0) {
      puVar5 = (undefined8 *)param_1[4];
      do {
        iVar2 = FUN_0352ff48(*puVar5,param_2,param_3,param_4);
        if (iVar2 != 1) {
          return 2;
        }
        if (*param_4 != '\0') {
          return 1;
        }
        puVar5 = puVar5 + 1;
      } while (puVar5 != (undefined8 *)(param_1[4] + (ulong)*(uint *)(param_1 + 5) * 8));
    }
  }
  else if (*param_4 != '\0') {
    return 1;
  }
  *(int *)(param_3 + 1) = (int)param_3[1] + -1;
  return 1;
}


