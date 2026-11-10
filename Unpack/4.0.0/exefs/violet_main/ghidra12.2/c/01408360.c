/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01408360; name: FUN_01408360
 */


void FUN_01408360(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &DAT_0459d418;
  param_1[4] = &PTR_LAB_0459d450;
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 0x20))();
  }
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 0x20))();
  }
  lVar5 = param_1[0xd];
  if (lVar5 != 0) {
    lVar1 = param_1[0xf];
    plVar2 = (long *)param_1[0x10];
    param_1[0xe] = lVar5;
    uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,0x10);
        goto LAB_014083dc;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,0x10);
  }
LAB_014083dc:
  FUN_01408438(param_1 + 6);
  return;
}


