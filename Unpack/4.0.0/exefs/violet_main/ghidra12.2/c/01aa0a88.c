/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aa0a88; name: FUN_01aa0a88
 */


void FUN_01aa0a88(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_1[0x8a];
  *param_1 = &PTR_FUN_045610f0;
  if (lVar4 != 0) {
    lVar3 = param_1[0x8c];
    param_1[0x8b] = lVar4;
    plVar5 = (long *)param_1[0x8d];
    uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_00c4e600();
      if (0 < *(int *)(lVar2 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar4,lVar3 - lVar4,4);
        goto LAB_01aa0af0;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar3 - lVar4,4);
  }
LAB_01aa0af0:
  FUN_01aa0b2c(param_1);
  return;
}


