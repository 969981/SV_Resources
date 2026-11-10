/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d6a98; name: FUN_001d6a98
 */


undefined8 FUN_001d6a98(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  char *__s1;
  undefined8 uVar3;
  
  if (*(long *)(param_2 + 8) == 0) {
    uVar3 = 0x17;
  }
  else {
    *(undefined1 **)(param_2 + 0x58) = &LAB_001d676c;
    *(undefined1 **)(param_2 + 0x60) = &LAB_001d6778;
    lVar1 = param_2 + 0x18;
    __s1 = (char *)FUN_00385590();
    iVar2 = strcmp(__s1,"1.2.0.4");
    if (iVar2 < 0) {
      uVar3 = FUN_0037fff0(lVar1,0xfffffff1,"1.2.11.f-NINTENDO-SDK-v1",0x70);
      if ((int)uVar3 == 0) {
        *(undefined8 *)(param_2 + 0x10) = 0x800000001;
        return uVar3;
      }
    }
    else {
      uVar3 = FUN_0037fff0(lVar1,0x2f,"1.2.11.f-NINTENDO-SDK-v1",0x70);
      if ((int)uVar3 == 0) {
        *(undefined4 *)(param_2 + 0x10) = 6;
        return uVar3;
      }
    }
    FUN_001d6780(param_1,lVar1);
    uVar3 = 0x3d;
  }
  return uVar3;
}


