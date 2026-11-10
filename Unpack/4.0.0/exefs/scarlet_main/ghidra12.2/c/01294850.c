/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01294850; name: FUN_01294850
 */


/* WARNING: Removing unreachable block (ram,0x01294a14) */
/* WARNING: Removing unreachable block (ram,0x01294a18) */
/* WARNING: Removing unreachable block (ram,0x01294a20) */
/* WARNING: Removing unreachable block (ram,0x01294a28) */
/* WARNING: Removing unreachable block (ram,0x01294a5c) */
/* WARNING: Removing unreachable block (ram,0x01294a64) */
/* WARNING: Removing unreachable block (ram,0x01294a68) */
/* WARNING: Removing unreachable block (ram,0x01294a70) */
/* WARNING: Removing unreachable block (ram,0x01294a78) */
/* WARNING: Removing unreachable block (ram,0x01294abc) */
/* WARNING: Removing unreachable block (ram,0x01294acc) */
/* WARNING: Removing unreachable block (ram,0x01294a88) */
/* WARNING: Removing unreachable block (ram,0x01294a30) */
/* WARNING: Removing unreachable block (ram,0x01294a34) */

void FUN_01294850(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_c0 [128];
  undefined8 local_28;
  
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
  FUN_01294af8(param_1,&local_28,auStack_c0 + 0x80,auStack_c0 + 0xb8);
  return;
}


