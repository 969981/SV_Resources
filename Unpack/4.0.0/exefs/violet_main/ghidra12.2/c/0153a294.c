/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0153a294; name: FUN_0153a294
 */


uint FUN_0153a294(long param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined1 auStack_4c [28];
  
  lVar7 = *(long *)(*param_2 + 0x70);
  bVar1 = *(char *)(lVar7 + 0x19) == '\0';
  if (bVar1) {
    FUN_00e677e8();
    lVar7 = *(long *)(*param_2 + 0x70);
  }
  iVar2 = *(int *)(param_1 + 0x40);
  iVar5 = FUN_00dbf838(lVar7);
  if ((iVar2 == iVar5) &&
     (cVar3 = *(char *)(param_1 + 0x45), cVar4 = FUN_018e79fc(*param_2), cVar3 == cVar4)) {
    FUN_020f8ff0(*param_2,auStack_4c,0xd);
    uVar6 = FUN_0131cbf0(auStack_4c,param_1 + 0x50);
  }
  else {
    uVar6 = 0;
  }
  if (bVar1 && *(char *)(*(long *)(*param_2 + 0x70) + 0x19) != '\0') {
    FUN_00e679f0();
  }
  return uVar6 & 1;
}


