/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c84468; name: FUN_00c84468
 */


void FUN_00c84468(float param_1,long param_2,undefined8 *param_3,int param_4,int param_5,
                 long param_6)

{
  code *UNRECOVERED_JUMPTABLE;
  int *piVar1;
  uint uVar2;
  ushort *puVar3;
  ulong uVar4;
  float fVar5;
  float local_14;
  
  if (param_6 == 0) {
    return;
  }
  if ((param_4 == param_5) && (param_5 != 1)) {
    return;
  }
  if ((param_4 != param_5) || (param_5 != 1)) {
    if ((param_4 == 0) && (param_5 - 1U < 2)) {
      UNRECOVERED_JUMPTABLE = *(code **)(param_6 + 0x30);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return;
      }
      param_6 = param_6 + 0x50;
    }
    else {
      if ((1 < param_4 - 1U) || (param_5 != 3)) {
        if (param_4 != 0) {
          return;
        }
        if (param_5 != 3) {
          return;
        }
        if (*(code **)(param_6 + 0x30) != (code *)0x0) {
          (**(code **)(param_6 + 0x30))(param_6 + 0x50,param_3,param_2 + 0xd0);
        }
      }
      UNRECOVERED_JUMPTABLE = *(code **)(param_6 + 0x130);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return;
      }
      param_6 = param_6 + 0x150;
    }
                    /* WARNING: Could not recover jumptable at 0x00c8455c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_6,param_3,param_2 + 0xd0);
    return;
  }
  if (*(code **)(param_6 + 0xb0) == (code *)0x0) {
    return;
  }
  piVar1 = (int *)*param_3;
  puVar3 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (*puVar3 < 0xb) {
    uVar2 = 0;
    if (8 < *puVar3) goto LAB_00c844e4;
  }
  else {
    uVar2 = 0;
    if ((ulong)puVar3[5] != 0) {
      uVar2 = *(uint *)((long)piVar1 + (ulong)puVar3[5]);
    }
LAB_00c844e4:
    uVar4 = (ulong)puVar3[4];
    if (uVar4 != 0) {
      uVar2 = uVar2 - *(int *)((long)piVar1 + uVar4);
      fVar5 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar1 + uVar4));
      goto LAB_00c844f0;
    }
  }
  fVar5 = 0.0;
LAB_00c844f0:
  local_14 = (param_1 - fVar5) / (float)uVar2;
  (**(code **)(param_6 + 0xb0))(param_6 + 0xd0,param_3,&local_14,param_2 + 0xd0);
  return;
}


