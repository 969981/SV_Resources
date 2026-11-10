/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344c8b0; name: FUN_0344c8b0
 */


void FUN_0344c8b0(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_50;
  undefined1 local_48;
  
  puVar2 = PTR_DAT_047e2fe8;
  plVar3 = *(long **)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x18);
  plVar5 = plVar3;
  if (uVar1 == 0) {
LAB_0344c934:
    if (plVar5 != plVar3 + (ulong)uVar1 * 6) {
      for (plVar5 = (long *)plVar5[4]; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5[3] == param_2) {
          lVar4 = plVar5[2];
          plVar3 = *(long **)(lVar4 + 0x48);
          if (plVar3 != (long *)0x0) {
            do {
              lVar4 = plVar3[2];
              local_48 = 0;
              local_50 = 0x400000000;
              *(undefined4 *)(lVar4 + 0x2d8) = 0;
              FUN_034a32dc(lVar4,&local_50,0);
              plVar3 = (long *)*plVar3;
            } while (plVar3 != (long *)0x0);
            lVar4 = plVar5[2];
          }
          for (plVar3 = *(long **)(lVar4 + 0x70); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
            FUN_03456880(*(undefined8 *)puVar2,plVar3[2]);
          }
        }
      }
    }
  }
  else {
    lVar4 = (ulong)uVar1 * 0x30;
    do {
      if (((*(long *)(param_2 + 0x40) == *plVar5) && (*(long *)(param_2 + 0x10) == plVar5[1])) &&
         (*(int *)(param_2 + 0x2c) == (int)plVar5[2])) goto LAB_0344c934;
      lVar4 = lVar4 + -0x30;
      plVar5 = plVar5 + 6;
    } while (lVar4 != 0);
  }
  puVar2 = PTR_DAT_047e2fe8;
  for (plVar5 = *(long **)(param_1 + 0x28); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    if (plVar5[3] == param_2) {
      lVar4 = plVar5[2];
      plVar3 = *(long **)(lVar4 + 0x48);
      if (plVar3 != (long *)0x0) {
        do {
          lVar4 = plVar3[2];
          local_48 = 0;
          local_50 = 0x400000000;
          *(undefined4 *)(lVar4 + 0x2d8) = 0;
          FUN_034a32dc(lVar4,&local_50,0);
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
        lVar4 = plVar5[2];
      }
      for (plVar3 = *(long **)(lVar4 + 0x70); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        FUN_03456880(*(undefined8 *)puVar2,plVar3[2]);
      }
    }
  }
  return;
}


