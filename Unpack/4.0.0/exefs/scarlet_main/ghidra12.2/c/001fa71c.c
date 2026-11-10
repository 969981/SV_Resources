/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001fa71c; name: FUN_001fa71c
 */


undefined * FUN_001fa71c(void)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_047cba18;
  if (*(int *)PTR_DAT_047cba18 == 0) {
    piVar1 = (int *)(PTR_DAT_047cba18 + 4);
    *(undefined4 *)PTR_DAT_047cba18 = 1;
    *(int *)(puVar3 + 4) = *piVar1 + 1;
    lVar4 = FUN_001fa55c(0x4000,PTR_FUN_047cba28,0,"LibcurlGc");
    *(long *)(puVar3 + 8) = lVar4;
    if (lVar4 != 0) {
      lVar4 = FUN_001ec2f8(0x20);
      *(long *)(puVar3 + 0x58) = lVar4;
      if (lVar4 != 0) {
        FUN_001cb57c(lVar4,&DAT_001fa92c);
        lVar5 = FUN_001ec2f8(0x20);
        *(long *)(puVar3 + 0x60) = lVar5;
        lVar4 = 0;
        if (lVar5 != 0) {
          FUN_001cb57c(lVar5,&LAB_001fa930);
          nnosInitializeMutex(puVar3 + 0x38,1,0);
          nnosInitializeEvent(puVar3 + 0x10,0,1);
          puVar2 = puVar3 + 0x68;
          nnosInitializeEvent(puVar2,0,1);
          nnosStartThread(*(undefined8 *)(puVar3 + 8));
          nnosWaitEvent(puVar2);
          nnosFinalizeEvent(puVar2);
          return puVar3;
        }
        goto LAB_001fa73c;
      }
    }
  }
  lVar4 = *(long *)(puVar3 + 0x60);
LAB_001fa73c:
  if (lVar4 != 0) {
    FUN_001cb68c(lVar4,0);
  }
  if (*(long *)(puVar3 + 0x58) != 0) {
    FUN_001cb68c(*(long *)(puVar3 + 0x58),0);
  }
  if (*(long *)(puVar3 + 8) != 0) {
    FUN_001fa6dc();
  }
  *(undefined4 *)puVar3 = 0;
  memset(puVar3 + 0x10,0,0x58);
  return (undefined *)0x0;
}


