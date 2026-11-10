/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d6264; name: FUN_001d6264
 */


undefined1 FUN_001d6264(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  size_t sVar4;
  char *__s;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0xc28);
  do {
    if (puVar5 == (undefined8 *)0x0) {
      uVar2 = 2;
LAB_001d62cc:
      bVar1 = 4 < param_3;
      if (4 < param_3) {
        param_3 = 5;
      }
      iVar3 = thunk_FUN_001e0a34("HTTP/",param_2,param_3);
      if (iVar3 != 0) {
        uVar2 = bVar1;
      }
      return uVar2;
    }
    __s = (char *)*puVar5;
    sVar4 = strlen(__s);
    if (param_3 <= sVar4) {
      sVar4 = param_3;
    }
    iVar3 = thunk_FUN_001e0a34(__s,param_2,sVar4);
    if (iVar3 != 0) {
      if (4 < param_3) {
        return 1;
      }
      uVar2 = 0;
      goto LAB_001d62cc;
    }
    puVar5 = (undefined8 *)puVar5[1];
  } while( true );
}


