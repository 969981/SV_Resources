/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005dd9c0; name: FUN_005dd9c0
 */


void FUN_005dd9c0(long *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1[1];
  if (lVar3 == lVar2) {
    lVar3 = lVar2;
  }
  else {
    do {
      if ((*(byte *)(lVar3 + -0x20) & 1) == 0) {
        if ((*(byte *)(lVar3 + -0x40) & 1) == 0) goto LAB_005dda08;
LAB_005dda3c:
        (**(code **)(**(long **)(lVar3 + -0x28) + 0x18))
                  (*(long **)(lVar3 + -0x28),*(undefined8 *)(lVar3 + -0x30),
                   *(ulong *)(lVar3 + -0x40) & 0xfffffffffffffffe,1);
        bVar1 = *(byte *)(lVar3 + -0x68);
      }
      else {
        (**(code **)(**(long **)(lVar3 + -8) + 0x18))
                  (*(long **)(lVar3 + -8),*(undefined8 *)(lVar3 + -0x10),
                   *(ulong *)(lVar3 + -0x20) & 0xfffffffffffffffe,1);
        if ((*(byte *)(lVar3 + -0x40) & 1) != 0) goto LAB_005dda3c;
LAB_005dda08:
        bVar1 = *(byte *)(lVar3 + -0x68);
      }
      if ((bVar1 & 1) != 0) {
        (**(code **)(**(long **)(lVar3 + -0x50) + 0x18))
                  (*(long **)(lVar3 + -0x50),*(undefined8 *)(lVar3 + -0x58),
                   *(ulong *)(lVar3 + -0x68) & 0xfffffffffffffffe,1);
      }
      lVar3 = lVar3 + -0x70;
    } while (lVar2 != lVar3);
    lVar3 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x005ddaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar3,param_1[2] - lVar3,8);
  return;
}


