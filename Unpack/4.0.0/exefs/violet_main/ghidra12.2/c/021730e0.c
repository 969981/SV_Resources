/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021730e0; name: FUN_021730e0
 */


int FUN_021730e0(undefined8 param_1,short *param_2,long *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  float fVar7;
  
  fVar4 = (float)FUN_00fe8c18(*param_3);
  if (*param_2 == 0x10) {
    if ((ulong)(ushort)param_2[1] < 2) {
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      uVar1 = NEON_ucvtf((uint)(ushort)param_2[3]);
      uVar5 = (undefined2)uVar1;
      uVar6 = (undefined2)((uint)uVar1 >> 0x10);
    }
    param_2 = param_2 + (ulong)(ushort)param_2[1] + 2;
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
  }
  uVar3 = *(undefined8 *)(*param_3 + 0x28);
  fVar7 = (float)((uint)(int)(fVar4 * (float)CONCAT22(uVar6,uVar5)) >> 8);
  FUN_00fe8c18();
  fVar4 = (float)FUN_02173240(param_1,param_2,uVar3);
  if (fVar4 <= fVar7) {
    iVar2 = 1000;
  }
  else {
    iVar2 = (int)((fVar7 / fVar4) * 1000.0);
  }
  return iVar2;
}


