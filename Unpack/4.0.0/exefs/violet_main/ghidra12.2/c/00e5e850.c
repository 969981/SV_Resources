/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5e850; name: FUN_00e5e850
 */


long FUN_00e5e850(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x68);
  uVar2 = uVar4 + param_2;
  if ((CARRY8(uVar4,param_2)) || (uVar2 == 0xffffffffffffffff)) {
    *(undefined1 *)(param_1 + 0x5a) = 4;
LAB_00e5e8a4:
    *(undefined8 *)(param_1 + 0x68) = 0xffffffffffffffff;
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x5a);
  if (bVar1 == 4) goto LAB_00e5e8a4;
  uVar3 = *(ulong *)(param_1 + 0x70);
  if ((bVar1 == 2) && (*(char *)(param_1 + 0x78) == '\0')) {
    *(undefined1 *)(param_1 + 0x78) = 1;
    *(ulong *)(param_1 + 0x68) = uVar2;
    *(ulong *)(param_1 + 0x70) = uVar4;
    *(undefined1 *)(param_1 + 0x5a) = 3;
  }
  else {
    *(ulong *)(param_1 + 0x68) = uVar2;
    if (bVar1 - 1 < 2) {
      uVar4 = uVar2 - uVar3;
      if (uVar3 < uVar2) {
        if ((param_3 <= uVar4) && (uVar4 <= param_4)) {
          *(ulong *)(param_1 + 0x70) = uVar2;
          if (bVar1 == 2) {
            *(undefined1 *)(param_1 + 0x5a) = 3;
          }
          goto LAB_00e5e90c;
        }
        if (param_2 <= uVar4) {
          uVar2 = uVar3 + param_4;
          goto LAB_00e5e908;
        }
      }
      uVar2 = uVar3 + param_3;
    }
    else {
      uVar2 = uVar3 + param_2;
    }
  }
LAB_00e5e908:
  *(ulong *)(param_1 + 0x70) = uVar2;
LAB_00e5e90c:
  return uVar2 - uVar3;
}


