/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007dab34; name: FUN_007dab34
 */


undefined8 FUN_007dab34(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 uVar10;
  undefined8 local_60;
  undefined4 local_58;
  
  puVar1 = PTR_DAT_047d0a08;
  lVar9 = *(long *)PTR_DAT_047d0a08 + 0x1b8;
  lVar5 = FUN_007e5328(lVar9);
  if (lVar5 != 0) {
    lVar5 = FUN_007e5328(lVar9);
    lVar6 = FUN_007e5328(param_2);
    if (lVar5 != lVar6) {
      uVar7 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
      uVar8 = FUN_007e5328(lVar9);
      lVar9 = FUN_007e2bb4(uVar7,uVar8);
      if (lVar9 != 0) {
        FUN_007d5240(*(undefined8 *)(param_1 + 0x58),lVar9);
      }
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  uVar7 = FUN_007e5328(param_2);
  uVar2 = FUN_007e5330(param_2);
  uVar3 = FUN_007e5310(param_2);
  uVar4 = FUN_007e531c(param_2);
  FUN_007e5304(&local_60,param_2);
  lVar9 = FUN_007d6b54(uVar8,uVar7,uVar2,uVar3,uVar4 & 1,&local_60,0,0,0);
  uVar7 = 0;
  if (lVar9 != 0) {
    if (*(char *)(*(long *)puVar1 + 0x459) == '\0') {
      uVar10 = 1;
    }
    else {
      uVar10 = *(undefined1 *)(lVar9 + 0x358);
    }
    *(undefined1 *)(lVar9 + 0x359) = uVar10;
    FUN_007e1bc4(lVar9,param_2);
    local_60 = 0x10000000000;
    local_58 = 0;
    lVar9 = *(long *)puVar1;
    (**(code **)(*param_2 + 0x20))(param_2,&local_60);
    FUN_007e51d8(lVar9 + 0x1b8,param_2);
    uVar7 = 1;
  }
  return uVar7;
}


