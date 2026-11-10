/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cb6e0; name: FUN_031cb6e0
 */


void FUN_031cb6e0(undefined1 (*param_1) [16])

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar2 = *(undefined8 *)*param_1;
  pauVar1 = param_1 + 1;
  uVar4 = *(undefined8 *)*pauVar1;
  auVar6 = NEON_ext(*pauVar1,*pauVar1,8,1);
  pauVar1 = param_1 + 2;
  uVar3 = *(undefined8 *)*pauVar1;
  auVar7 = NEON_ext(*pauVar1,*pauVar1,8,1);
  auVar5 = NEON_ext(*param_1,*param_1,8,1);
  auVar8._4_12_ = auVar7._4_12_;
  auVar8._0_4_ = (int)((ulong)uVar3 >> 0x20);
  *(long *)(param_1[2] + 8) = auVar7._0_8_;
  *(ulong *)param_1[2] = CONCAT44(auVar6._0_4_,auVar5._0_4_);
  *(undefined8 *)(*param_1 + 8) = uVar3;
  *(ulong *)*param_1 = CONCAT44((int)uVar4,(int)uVar2);
  *(long *)(param_1[1] + 8) = auVar8._0_8_;
  *(ulong *)param_1[1] = CONCAT44((int)((ulong)uVar4 >> 0x20),(int)((ulong)uVar2 >> 0x20));
  return;
}


