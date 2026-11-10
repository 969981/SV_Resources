/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d9bf48; name: FUN_00d9bf48
 */


uint FUN_00d9bf48(long *param_1,ulong param_2)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_1[8] == 0) {
    uVar3 = 0xff;
  }
  else {
    lVar7 = *(long *)(param_1[8] + 0x290);
    uVar3 = FUN_00d9c090(lVar7,*(undefined1 *)(*(long *)(lVar7 + 0x10) + 0x95),0);
    iVar4 = *(int *)(*(long *)(lVar7 + 8) + 0x36c);
    if (iVar4 == 2) {
      uVar3 = *(uint *)(&DAT_03d69cf0 + (param_2 & 0xff) * 4);
    }
    else {
      uVar3 = (uVar3 ^ (uint)param_2) & 1;
      if (iVar4 == 1) {
        cVar2 = *(char *)(*(long *)(lVar7 + 8) + 0x370);
        puVar1 = &UNK_03d69ce4;
        if (cVar2 != '\x05') {
          puVar1 = &UNK_03d69cd8;
        }
        uVar5 = FUN_00d9c228(1,cVar2,param_2 & 0xffffffff);
        uVar3 = (uint)(byte)puVar1[(uVar5 & 0xff) + (ulong)(uVar3 ^ 1) * 6];
      }
    }
    iVar4 = (**(code **)(*param_1 + 0x9c8))(param_1);
    if ((iVar4 == 2) && ((*(byte *)(*(long *)(param_1[6] + 0x38) + 0x499) >> 2 & 1) != 0)) {
      uVar5 = FUN_00d9c090(*(undefined8 *)(param_1[8] + 0x290),*(undefined1 *)(param_1[6] + 0x95),0)
      ;
      if (((uint)param_2 & 0xff) < 4) {
        uVar6 = FUN_00d9c228(2,*(undefined1 *)(param_1[8] + 0x370),param_2 & 0xffffffff);
        uVar3 = (uint)(byte)(&UNK_03d611b9)[(uVar6 & 0xff) + (uVar5 & 0xff) * 6];
      }
      else {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


