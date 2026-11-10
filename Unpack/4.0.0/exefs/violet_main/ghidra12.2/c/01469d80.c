/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01469d80; name: FUN_01469d80
 */


void FUN_01469d80(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x18) >> 1 & 1) == 0) {
    lVar4 = tpidr_el0;
    plVar3 = *(long **)(lVar4 + 0x30);
    if (plVar3 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar3 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    puVar2 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x18,8);
    lVar4 = *(long *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(lVar4 + 8);
    *puVar2 = &PTR_LAB_045e64f0;
    puVar2[1] = uVar5;
    *(undefined4 *)(puVar2 + 2) = param_2;
    *(undefined8 **)(lVar4 + 8) = puVar2;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  }
  return;
}


