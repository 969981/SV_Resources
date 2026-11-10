/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029588c0; name: FUN_029588c0
 */


void FUN_029588c0(long param_1,int param_2)

{
  char cVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int local_90;
  undefined1 local_8c;
  int local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined7 local_64;
  undefined1 uStack_5d;
  undefined2 uStack_5c;
  undefined1 uStack_5a;
  undefined2 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_4e;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  lVar4 = *(long *)(lVar2 + 0x28);
  iVar3 = 0;
  if (lVar4 != 0) {
    iVar3 = *(int *)(lVar4 + 0xc);
  }
  if ((iVar3 == param_2) &&
     (((lVar2 = *(long *)(lVar2 + 0x270), lVar2 == 0 || (*(int *)(lVar2 + 0xc) == 0)) &&
      (cVar1 = FUN_017962f0(param_1), cVar1 == '\x10')))) {
    local_58 = 0;
    local_54 = 0;
    uStack_5a = 0;
    local_84 = 0;
    local_7c = 0;
    local_74 = 0;
    local_6c = 0;
    local_64 = 0;
    uStack_5d = 0;
    local_4e = 0;
    local_44 = 0;
    local_3c = 0;
    local_34 = 0;
    local_2c = 0;
    local_24 = 0;
    local_8c = 1;
    uStack_5c = 0x101;
    local_50 = 1;
    local_90 = param_2;
    local_88 = param_2;
    FUN_0293e270(param_1,&local_90);
  }
  return;
}


