/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0345a0b0; name: FUN_0345a0b0
 */


void FUN_0345a0b0(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  MutexType *pMVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long alStack_430 [128];
  
  if (*(char *)(param_2 + 9) == '\0') {
    return;
  }
  lVar7 = *(long *)PTR_DAT_047e6f28;
  pMVar2 = (MutexType *)(lVar7 + 0x1c0);
  nn::os::LockMutex(pMVar2);
  if (*(uint *)(lVar7 + 0x1f0) != 0) {
    puVar6 = (undefined8 *)
             ((long)alStack_430 +
             (0x400 - ((ulong)*(uint *)(lVar7 + 0x1f0) * 8 + 0xf & 0xffffffff0)));
    uVar3 = *(uint *)(lVar7 + 0x1e8);
    if (uVar3 != 0) {
      plVar4 = *(long **)(lVar7 + 0x1e0);
      lVar7 = *plVar4;
      if (lVar7 == 0) {
        uVar5 = 0;
        do {
          if (uVar3 - 1 == uVar5) goto LAB_0345a168;
          uVar5 = uVar5 + 1;
          lVar7 = plVar4[uVar5 & 0xffffffff];
        } while (lVar7 == 0);
      }
      else {
        uVar5 = 0;
      }
      uVar8 = 0;
      do {
        do {
          puVar6[uVar8] = lVar7;
          lVar7 = *(long *)(lVar7 + 8);
          uVar8 = uVar8 + 1;
        } while (lVar7 != 0);
        do {
          uVar1 = (int)uVar5 + 1;
          uVar5 = (ulong)uVar1;
          if (uVar3 <= uVar1) {
            nn::os::UnlockMutex(pMVar2);
            if ((int)uVar8 == 0) {
              return;
            }
            uVar8 = uVar8 & 0xffffffff;
            do {
              FUN_0347ada4(*puVar6,*param_2,*(undefined8 *)(param_2 + 2));
              uVar8 = uVar8 - 1;
              puVar6 = puVar6 + 1;
            } while (uVar8 != 0);
            return;
          }
          lVar7 = plVar4[uVar1];
        } while (lVar7 == 0);
      } while( true );
    }
  }
LAB_0345a168:
  nn::os::UnlockMutex(pMVar2);
  return;
}


