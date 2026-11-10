/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b52e0; name: FUN_034b52e0
 */


undefined8 FUN_034b52e0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  *(undefined4 *)(param_1 + 2) = 0;
  if ((*(uint *)(param_1 + 1) < 0xc) && (*(uint *)((long)param_1 + 0xc) < 0xb)) {
    lVar2 = ((ulong)*(uint *)((long)param_1 + 0xc) - (ulong)*(uint *)(param_1 + 1)) + 0xb;
    lVar1 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_1,lVar2 * 8);
    if (lVar1 != 0) {
      *param_1 = lVar1;
      *(int *)((long)param_1 + 0xc) = (int)lVar2;
      goto LAB_034b5340;
    }
LAB_034b53fc:
    uVar3 = 0x34;
  }
  else {
LAB_034b5340:
    uVar4 = 0;
    *(undefined4 *)(param_1 + 1) = 0xb;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 1));
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(uint *)(param_1 + 4) < 0xc) && (*(uint *)((long)param_1 + 0x24) < 0xb)) {
      lVar2 = ((ulong)*(uint *)((long)param_1 + 0x24) - (ulong)*(uint *)(param_1 + 4)) + 0xb;
      lVar1 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,param_1[3],lVar2 * 8);
      if (lVar1 == 0) goto LAB_034b53fc;
      param_1[3] = lVar1;
      *(int *)((long)param_1 + 0x24) = (int)lVar2;
    }
    uVar4 = 0;
    *(undefined4 *)(param_1 + 4) = 0xb;
    do {
      *(undefined8 *)(param_1[3] + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 4));
    lVar2 = FUN_034b8328(param_1,0x83);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x10) = 0x42800000;
    }
    uVar3 = 1;
  }
  return uVar3;
}


