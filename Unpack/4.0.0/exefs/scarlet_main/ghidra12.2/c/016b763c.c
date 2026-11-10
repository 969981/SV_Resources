/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016b763c; name: FUN_016b763c
 */


void FUN_016b763c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)*param_2;
  plVar3 = (long *)param_2[1];
  if (plVar2 != plVar3) {
    lVar6 = *param_1;
    if (((*plVar2 != 0) && (uVar5 = FUN_0148d5cc(*plVar2 + 8), (uVar5 & 1) != 0)) &&
       (uVar5 = (**(code **)(*(long *)*plVar2 + 0xc0))(), (uVar5 & 1) == 0)) {
      (**(code **)(*(long *)*plVar2 + 0xa8))();
      *(undefined **)(lVar6 + 0xa8) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar6 + 0xb0) = 0;
    }
    plVar1 = plVar2 + 1;
    if (plVar1 != plVar3) {
      if (((*plVar1 != 0) && (uVar5 = FUN_0148d5cc(*plVar1 + 8), (uVar5 & 1) != 0)) &&
         (uVar5 = (**(code **)(*(long *)*plVar1 + 0xc0))(), (uVar5 & 1) == 0)) {
        (**(code **)(*(long *)*plVar1 + 0xa8))();
        *(undefined **)(lVar6 + 0xa8) = PTR_FUN_047d9428;
        *(undefined8 *)(lVar6 + 0xb0) = 0;
      }
      plVar1 = plVar2 + 2;
      if (plVar1 != plVar3) {
        if (((*plVar1 != 0) && (uVar5 = FUN_0148d5cc(*plVar1 + 8), (uVar5 & 1) != 0)) &&
           (uVar5 = (**(code **)(*(long *)*plVar1 + 0xc0))(), (uVar5 & 1) == 0)) {
          (**(code **)(*(long *)*plVar1 + 0xa8))();
          *(undefined **)(lVar6 + 0xa8) = PTR_FUN_047d9428;
          *(undefined8 *)(lVar6 + 0xb0) = 0;
        }
        puVar4 = PTR_FUN_047d9428;
        for (plVar2 = plVar2 + 3; plVar2 != plVar3; plVar2 = plVar2 + 1) {
          if (((*plVar2 != 0) && (uVar5 = FUN_0148d5cc(*plVar2 + 8), (uVar5 & 1) != 0)) &&
             (uVar5 = (**(code **)(*(long *)*plVar2 + 0xc0))(), (uVar5 & 1) == 0)) {
            (**(code **)(*(long *)*plVar2 + 0xa8))();
            *(undefined **)(lVar6 + 0xa8) = puVar4;
            *(undefined8 *)(lVar6 + 0xb0) = 0;
          }
        }
      }
    }
  }
  return;
}


