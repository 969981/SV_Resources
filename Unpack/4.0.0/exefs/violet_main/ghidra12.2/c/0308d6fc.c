/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0308d6fc; name: FUN_0308d6fc
 */


undefined1  [16]
FUN_0308d6fc(long param_1,float *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5
            )

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar7;
  ulong uVar5;
  float fVar8;
  undefined1 auVar6 [16];
  float local_58 [2];
  float local_50;
  float fStack_4c;
  undefined8 uStack_48;
  int local_28 [2];
  
  lVar2 = *(long *)(param_1 + 8);
  local_58[0] = *param_2;
  plVar1 = *(long **)(lVar2 + 0x10);
  if (plVar1 != (long *)0x0) {
    local_50 = local_58[0];
    (**(code **)(*plVar1 + 0x28))
              (plVar1,0,&local_50,*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20));
    local_58[0] = *param_2;
    lVar2 = *(long *)(param_1 + 8);
  }
  FUN_030971a8(local_28,*(undefined8 *)(param_1 + 0x10),param_3,local_58,lVar2 + 0x50,&local_50);
  if (local_28[0] == -1) {
    uVar5 = 0x7f7fffee7f7fffee;
  }
  else {
    fVar3 = (float)*param_3 - local_50;
    fVar7 = (float)((ulong)*param_3 >> 0x20) - fStack_4c;
    fVar8 = (float)param_3[1] - (float)uStack_48;
    fVar3 = fVar3 * fVar3;
    fVar7 = fVar7 * fVar7;
    fVar8 = fVar8 * fVar8;
    fVar4 = fVar3 + fVar7 + fVar8;
    uVar5 = CONCAT44(fVar3 + fVar7 + fVar8,fVar4);
    if (fVar4 < (float)*param_5) {
      param_4[1] = uStack_48;
      *param_4 = CONCAT44(fStack_4c,local_50);
      *(int *)(param_1 + 0x18) = local_28[0];
    }
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar5;
  return auVar6;
}


