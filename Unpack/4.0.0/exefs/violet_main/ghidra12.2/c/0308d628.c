/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0308d628; name: FUN_0308d628
 */


undefined1  [16]
FUN_0308d628(long param_1,float *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5
            )

{
  int iVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar8;
  ulong uVar6;
  float fVar9;
  undefined1 auVar7 [16];
  float local_50;
  float fStack_4c;
  undefined8 uStack_48;
  float local_28 [2];
  
  lVar3 = *(long *)(param_1 + 8);
  local_28[0] = *param_2;
  plVar2 = *(long **)(lVar3 + 0x10);
  if (plVar2 != (long *)0x0) {
    local_50 = local_28[0];
    iVar1 = (**(code **)(*plVar2 + 0x28))
                      (plVar2,0,&local_50,*(undefined8 *)(lVar3 + 0x18),
                       *(undefined8 *)(lVar3 + 0x20));
    if (iVar1 == 0) {
      uVar6 = 0x7f7fffee7f7fffee;
      goto LAB_0308d6e4;
    }
    local_28[0] = *param_2;
  }
  FUN_0309684c(*(undefined8 *)(param_1 + 0x10),param_3,local_28,&local_50);
  fVar4 = (float)*param_3 - local_50;
  fVar8 = (float)((ulong)*param_3 >> 0x20) - fStack_4c;
  fVar9 = (float)param_3[1] - (float)uStack_48;
  fVar4 = fVar4 * fVar4;
  fVar8 = fVar8 * fVar8;
  fVar9 = fVar9 * fVar9;
  fVar5 = fVar4 + fVar8 + fVar9;
  uVar6 = CONCAT44(fVar4 + fVar8 + fVar9,fVar5);
  if (fVar5 < (float)*param_5) {
    param_4[1] = uStack_48;
    *param_4 = CONCAT44(fStack_4c,local_50);
    *(float *)(param_1 + 0x18) = *param_2;
  }
LAB_0308d6e4:
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar6;
  return auVar7;
}


