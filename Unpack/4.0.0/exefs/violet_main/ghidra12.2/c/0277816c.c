/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0277816c; name: FUN_0277816c
 */


/* WARNING: Removing unreachable block (ram,0x02778368) */
/* WARNING: Removing unreachable block (ram,0x0277836c) */
/* WARNING: Removing unreachable block (ram,0x02778374) */
/* WARNING: Removing unreachable block (ram,0x0277837c) */
/* WARNING: Removing unreachable block (ram,0x027783b0) */
/* WARNING: Removing unreachable block (ram,0x027783b8) */
/* WARNING: Removing unreachable block (ram,0x027783bc) */
/* WARNING: Removing unreachable block (ram,0x027783c4) */
/* WARNING: Removing unreachable block (ram,0x027783cc) */
/* WARNING: Removing unreachable block (ram,0x02778410) */
/* WARNING: Removing unreachable block (ram,0x02778420) */
/* WARNING: Removing unreachable block (ram,0x027783dc) */
/* WARNING: Removing unreachable block (ram,0x02778384) */
/* WARNING: Removing unreachable block (ram,0x02778388) */

void FUN_0277816c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined1 *param_5)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_d0 [128];
  
  lVar3 = (**(code **)(*(long *)(**(long **)(param_1 + 0x70) + 0x400) + 0x10))
                    (**(long **)(param_1 + 0x70) + 0x400,0x80,0x10);
  if (lVar3 == 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x70) + 0x20);
    *(long **)(param_1 + 0x70) = plVar1;
    if (plVar1 == *(long **)(param_1 + 0x40)) {
      FUN_012d0398(param_1);
    }
    else {
      lVar3 = *plVar1;
      *(undefined8 *)(lVar3 + 0x410) = 0;
      puVar2 = PTR_DAT_047d96b0;
      *(undefined2 *)(lVar3 + 0x418) = 0;
      *(long *)(lVar3 + 0x420) = lVar3;
      *(long *)(lVar3 + 0x428) = lVar3;
      *(undefined **)(lVar3 + 0x408) = puVar2 + 0x128;
      *(undefined **)(lVar3 + 0x400) = puVar2 + 0x10;
      *(undefined8 *)(lVar3 + 0x430) = 0x400;
    }
    lVar3 = (**(code **)(*(long *)(**(long **)(param_1 + 0x70) + 0x400) + 0x10))
                      (**(long **)(param_1 + 0x70) + 0x400,0x80,0x10);
    puVar2 = PTR_DAT_047d96b0;
    while (lVar3 == 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x70) + 0x20);
      *(long **)(param_1 + 0x70) = plVar1;
      if (plVar1 == *(long **)(param_1 + 0x40)) {
        FUN_012d0398(param_1);
      }
      else {
        lVar3 = *plVar1;
        *(undefined8 *)(lVar3 + 0x410) = 0;
        *(undefined2 *)(lVar3 + 0x418) = 0;
        *(undefined **)(lVar3 + 0x400) = puVar2 + 0x10;
        *(undefined **)(lVar3 + 0x408) = puVar2 + 0x128;
        *(long *)(lVar3 + 0x420) = lVar3;
        *(long *)(lVar3 + 0x428) = lVar3;
        *(undefined8 *)(lVar3 + 0x430) = 0x400;
      }
      lVar3 = (**(code **)(*(long *)(**(long **)(param_1 + 0x70) + 0x400) + 0x10))
                        (**(long **)(param_1 + 0x70) + 0x400,0x80,0x10);
    }
  }
  FUN_0277844c(lVar3,param_3,*param_4,*param_5);
  FUN_00d0a71c(auStack_d0 + 0x88,param_2);
  FUN_027784ec(param_1,auStack_d0 + 0xa0,auStack_d0 + 0x88);
  return;
}


