/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d1ef30; name: FUN_00d1ef30
 */


void FUN_00d1ef30(long param_1,uint param_2)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  
  if (((*(long *)(param_1 + 0x98) != 0) || (*(long *)(param_1 + 0xa0) != 0)) ||
     (*(long *)(param_1 + 0x50) != 0)) goto LAB_00d1ef4c;
  if ((*(long *)(param_1 + 0x60) == 0) || ((*(byte *)(*(long *)(param_1 + 0x60) + 0x1e8) & 1) == 0))
  {
    if (((*(long *)(param_1 + 0x18) != 0) &&
        (((*(byte *)(*(long *)(param_1 + 0x18) + 0x1e8) & 1) != 0 &&
         (*(long *)(param_1 + 0x18) != 0)))) &&
       ((*(byte *)(*(long *)(param_1 + 0x18) + 0x1e8) & 1) != 0)) {
      puVar2 = (uint *)(**(code **)(**(long **)(param_1 + 0x18) + 0x70))();
      lVar3 = (long)puVar2 + (ulong)*puVar2;
      goto LAB_00d1f028;
    }
  }
  else {
    lVar3 = FUN_029be138(*(undefined8 *)(param_1 + 0x60));
LAB_00d1f028:
    if (lVar3 != 0) goto LAB_00d1ef4c;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x60) + 0x1e8) & 1) == 0) {
    return;
  }
LAB_00d1ef4c:
  plVar1 = *(long **)(param_1 + 0xd0);
  if ((plVar1 != (long *)0x0) && ((char)plVar1[1] == '\0')) {
    (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined8 *)(param_1 + 8),param_2 & 1);
  }
  plVar1 = *(long **)(param_1 + 0xf0);
  if ((plVar1 != (long *)0x0) && ((char)plVar1[1] == '\0')) {
    (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined8 *)(param_1 + 8),param_2 & 1);
  }
  plVar1 = *(long **)(param_1 + 0x110);
  if ((plVar1 != (long *)0x0) && ((char)plVar1[1] == '\0')) {
    (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined8 *)(param_1 + 8),param_2 & 1);
  }
  plVar1 = *(long **)(param_1 + 0x130);
  if ((plVar1 != (long *)0x0) && ((char)plVar1[1] == '\0')) {
    (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined8 *)(param_1 + 8),param_2 & 1);
  }
  plVar1 = *(long **)(param_1 + 0x150);
  if ((plVar1 != (long *)0x0) && ((char)plVar1[1] == '\0')) {
    (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined8 *)(param_1 + 8),param_2 & 1);
  }
  plVar1 = *(long **)(param_1 + 0x170);
  if ((plVar1 == (long *)0x0) || ((char)plVar1[1] != '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d1f0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined8 *)(param_1 + 8),param_2 & 1);
  return;
}


