/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0264ba84; name: FUN_0264ba84
 */


/* WARNING: Removing unreachable block (ram,0x0264bc44) */
/* WARNING: Removing unreachable block (ram,0x0264bc48) */
/* WARNING: Removing unreachable block (ram,0x0264bc50) */
/* WARNING: Removing unreachable block (ram,0x0264bc58) */
/* WARNING: Removing unreachable block (ram,0x0264bc8c) */
/* WARNING: Removing unreachable block (ram,0x0264bc94) */
/* WARNING: Removing unreachable block (ram,0x0264bc98) */
/* WARNING: Removing unreachable block (ram,0x0264bca0) */
/* WARNING: Removing unreachable block (ram,0x0264bca8) */
/* WARNING: Removing unreachable block (ram,0x0264bcec) */
/* WARNING: Removing unreachable block (ram,0x0264bcfc) */
/* WARNING: Removing unreachable block (ram,0x0264bcb8) */
/* WARNING: Removing unreachable block (ram,0x0264bc60) */
/* WARNING: Removing unreachable block (ram,0x0264bc64) */

void FUN_0264ba84(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_c0 [128];
  undefined1 *local_28;
  
  local_28 = (undefined1 *)
             (**(code **)(*(long *)(**(long **)(param_1 + 0x70) + 0x400) + 0x10))
                       (**(long **)(param_1 + 0x70) + 0x400,1,1);
  if (local_28 == (undefined1 *)0x0) {
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
    local_28 = (undefined1 *)
               (**(code **)(*(long *)(**(long **)(param_1 + 0x70) + 0x400) + 0x10))
                         (**(long **)(param_1 + 0x70) + 0x400,1,1);
    puVar2 = PTR_DAT_047d96b0;
    while (local_28 == (undefined1 *)0x0) {
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
      local_28 = (undefined1 *)
                 (**(code **)(*(long *)(**(long **)(param_1 + 0x70) + 0x400) + 0x10))
                           (**(long **)(param_1 + 0x70) + 0x400,1,1);
    }
  }
  *local_28 = *param_3;
  FUN_00d0a71c(auStack_c0 + 0x80,param_2);
  FUN_0264bd28(param_1,&local_28,auStack_c0 + 0x80);
  return;
}


