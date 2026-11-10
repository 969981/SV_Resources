/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0125bfe8; name: FUN_0125bfe8
 */


void FUN_0125bfe8(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_2;
  lVar5 = *(long *)(lVar6 + (ulong)*(uint *)(param_1 + 0x5c));
  if ((lVar5 == 0) && (lVar5 = *(long *)(lVar6 + (ulong)*(uint *)(param_1 + 0x4c)), lVar5 != 0)) {
    plVar2 = (long *)(*(code *)**(undefined8 **)(lVar5 + 0x28))((undefined8 *)(lVar5 + 0x28));
    if (((*PTR_DAT_047db160 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047db160), iVar1 != 0)) {
      uVar4 = FUN_01fb90e4();
      *(undefined8 *)PTR_DAT_047db168 = uVar4;
      __cxa_guard_release(PTR_DAT_047db160);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_047db168) goto LAB_0125c0b4;
    }
    lVar5 = 0;
LAB_0125c0b4:
    *(long *)(lVar6 + (ulong)*(uint *)(param_1 + 0x5c)) = lVar5;
  }
  if ((((*(long *)(lVar5 + 0xd8) != 0) && (*(short *)(*(long *)(lVar5 + 0xd8) + 0x1a) != 0)) ||
      (uVar3 = FUN_01473a8c(lVar5 + 0xc0), (uVar3 & 1) != 0)) &&
     (lVar5 = *(long *)(lVar5 + 0xd0), lVar5 != 0)) {
    if ((*(long *)(lVar5 + 0x328) == *(long *)(lVar5 + 0x330)) ||
       (lVar6 = *(long *)(lVar5 + 0x330) + -8, *(long *)(lVar5 + 0x330) = lVar6,
       *(long *)(lVar5 + 0x328) == lVar6)) {
      *(undefined4 *)(lVar5 + 0x680) = 0;
      FUN_0125c124();
      return;
    }
  }
  return;
}


