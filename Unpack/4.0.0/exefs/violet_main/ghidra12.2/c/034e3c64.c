/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e3c64; name: FUN_034e3c64
 */


undefined8 FUN_034e3c64(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(uint *)(param_1 + 4) < 0xc) && (*(uint *)((long)param_1 + 0x24) < 0xb)) {
    lVar1 = ((ulong)*(uint *)((long)param_1 + 0x24) - (ulong)*(uint *)(param_1 + 4)) + 0xb;
    lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,param_1[3],lVar1 * 8);
    if (lVar2 != 0) {
      param_1[3] = lVar2;
      *(int *)((long)param_1 + 0x24) = (int)lVar1;
      goto LAB_034e3cc4;
    }
LAB_034e3d68:
    uVar3 = 0x34;
  }
  else {
LAB_034e3cc4:
    uVar4 = 0;
    *(undefined4 *)(param_1 + 4) = 0xb;
    do {
      *(undefined8 *)(param_1[3] + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 4));
    *(undefined4 *)(param_1 + 2) = 0;
    if ((*(uint *)(param_1 + 1) < 0xc) && (*(uint *)((long)param_1 + 0xc) < 0xb)) {
      lVar1 = ((ulong)*(uint *)((long)param_1 + 0xc) - (ulong)*(uint *)(param_1 + 1)) + 0xb;
      lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_1,lVar1 * 8);
      if (lVar2 == 0) goto LAB_034e3d68;
      *param_1 = lVar2;
      *(int *)((long)param_1 + 0xc) = (int)lVar1;
    }
    uVar4 = 0;
    *(undefined4 *)(param_1 + 1) = 0xb;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 1));
    uVar3 = 1;
  }
  return uVar3;
}


