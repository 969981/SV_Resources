/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02779718; name: FUN_02779718
 */


/* WARNING: Removing unreachable block (ram,0x02779914) */
/* WARNING: Removing unreachable block (ram,0x02779918) */
/* WARNING: Removing unreachable block (ram,0x02779920) */
/* WARNING: Removing unreachable block (ram,0x02779928) */
/* WARNING: Removing unreachable block (ram,0x0277995c) */
/* WARNING: Removing unreachable block (ram,0x02779964) */
/* WARNING: Removing unreachable block (ram,0x02779968) */
/* WARNING: Removing unreachable block (ram,0x02779970) */
/* WARNING: Removing unreachable block (ram,0x02779978) */
/* WARNING: Removing unreachable block (ram,0x027799bc) */
/* WARNING: Removing unreachable block (ram,0x027799cc) */
/* WARNING: Removing unreachable block (ram,0x02779988) */
/* WARNING: Removing unreachable block (ram,0x02779930) */
/* WARNING: Removing unreachable block (ram,0x02779934) */

void FUN_02779718(long param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4,
                 undefined8 *param_5)

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
  FUN_027799f8(*param_5,param_5[2],param_5[4],lVar3,param_3,*param_4);
  FUN_00d0a71c(auStack_d0 + 0x88,param_2);
  FUN_02779ab0(param_1,auStack_d0 + 0xa0,auStack_d0 + 0x88);
  return;
}


