/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e64a10; name: FUN_01e64a10
 */


undefined8 FUN_01e64a10(long param_1,long param_2,void *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined7 uStack_970;
  undefined1 local_969;
  undefined7 uStack_968;
  undefined4 uStack_960;
  undefined3 uStack_95c;
  undefined1 auStack_958 [2344];
  
  memcpy(auStack_958,param_3,0x928);
  plVar5 = (long *)(param_1 + 0xd8);
  lVar1 = *plVar5;
  if ((lVar1 == 0) || (lVar1 != param_2)) {
    lVar2 = *(long *)(param_1 + 0xa20);
    if ((lVar2 == 0) || (lVar2 != param_2)) {
      lVar3 = *(long *)(param_1 + 0x1368);
      if ((lVar3 == 0) || (lVar3 != param_2)) {
        lVar4 = *(long *)(param_1 + 0x1cb0);
        if ((lVar4 == 0) || (lVar4 != param_2)) {
          if ((((lVar1 != 0) && (plVar5 = (long *)(param_1 + 0xa20), lVar2 != 0)) &&
              (plVar5 = (long *)(param_1 + 0x1368), lVar3 != 0)) &&
             (plVar5 = (long *)(param_1 + 0x1cb0), lVar4 != 0)) {
            return 0;
          }
        }
        else {
          plVar5 = (long *)(param_1 + 0x1cb0);
        }
      }
      else {
        plVar5 = (long *)(param_1 + 0x1368);
      }
    }
    else {
      plVar5 = (long *)(param_1 + 0xa20);
    }
  }
  *plVar5 = param_2;
  memcpy(plVar5 + 1,auStack_958,0x928);
  *(undefined1 *)(plVar5 + 0x126) = 1;
  *(undefined4 *)((long)plVar5 + 0x931) = uStack_960;
  *(uint *)((long)plVar5 + 0x934) = CONCAT31(uStack_95c,uStack_960._3_1_);
  *(undefined1 *)(plVar5 + 0x127) = 0;
  *(ulong *)((long)plVar5 + 0x939) = CONCAT17(local_969,uStack_970);
  plVar5[0x128] = CONCAT71(uStack_968,local_969);
  return 1;
}


