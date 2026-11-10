/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004820b0; name: FUN_004820b0
 */


void FUN_004820b0(code *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  pthread_t pVar3;
  long lVar4;
  size_t sVar5;
  uint local_1150;
  undefined4 uStack_114c;
  undefined1 *local_1148;
  char acStack_1140 [4096];
  undefined1 auStack_140 [256];
  undefined8 local_38;
  
  pVar3 = pthread_self();
  do {
    lVar4 = FUN_00480c40(&local_38,&uStack_114c,&local_1148,&local_1150);
    if (lVar4 == 0) {
      return;
    }
    FUN_00480ca0(lVar4,auStack_140,0x100);
    puVar1 = &DAT_03c886bc;
    if ((local_1150 & 2) != 0) {
      puVar1 = local_1148;
    }
    FUN_003e7390(acStack_1140,0x1000,"%lu:%s:%s:%d:%s\n",pVar3,auStack_140,local_38,uStack_114c,
                 puVar1);
    sVar5 = strlen(acStack_1140);
    iVar2 = (*param_1)(acStack_1140,sVar5,param_2);
  } while (0 < iVar2);
  return;
}


