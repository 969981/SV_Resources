/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00482180; name: FUN_00482180
 */


void FUN_00482180(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  pthread_t pVar3;
  long lVar4;
  size_t sVar5;
  uint local_1148;
  undefined4 uStack_1144;
  undefined1 *local_1140;
  undefined8 uStack_1138;
  char acStack_1130 [4096];
  undefined1 auStack_130 [256];
  
  pVar3 = pthread_self();
  do {
    lVar4 = FUN_00480c40(&uStack_1138,&uStack_1144,&local_1140,&local_1148);
    if (lVar4 == 0) {
      return;
    }
    FUN_00480ca0(lVar4,auStack_130,0x100);
    puVar1 = &DAT_03c886bc;
    if ((local_1148 & 2) != 0) {
      puVar1 = local_1140;
    }
    FUN_003e7390(acStack_1130,0x1000,"%lu:%s:%s:%d:%s\n",pVar3,auStack_130,uStack_1138,uStack_1144,
                 puVar1);
    sVar5 = strlen(acStack_1130);
    iVar2 = FUN_003e8f00(param_1,acStack_1130,sVar5);
  } while (0 < iVar2);
  return;
}


