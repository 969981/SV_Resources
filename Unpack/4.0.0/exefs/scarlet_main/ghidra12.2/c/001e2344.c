/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e2344; name: FUN_001e2344
 */


undefined8 FUN_001e2344(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  
  if (*(long *)(param_1 + 0xf48) == 0) {
    if (*(long *)(param_1 + 0xf28) != 0) {
      if ((*(byte *)(param_1 + 0xf68) & 1) != 0) goto LAB_001e2378;
      goto LAB_001e238c;
    }
LAB_001e23a8:
    FUN_001db9c8(param_1,"No URL set!");
    uVar2 = 3;
  }
  else {
    if ((*(byte *)(param_1 + 0xf68) & 1) != 0) {
LAB_001e2378:
      FUN_001ec308();
      *(undefined8 *)(param_1 + 0xf48) = 0;
      *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) & 0xfe;
LAB_001e238c:
      if ((*(long *)(param_1 + 0xf28) != 0) &&
         (iVar1 = FUN_001e2d14(*(long *)(param_1 + 0xf28),0,param_1 + 0xd48,0), iVar1 != 0))
      goto LAB_001e23a8;
    }
    *(undefined8 *)(param_1 + 0xf48) = *(undefined8 *)(param_1 + 0xd48);
    uVar2 = FUN_001ebc70(param_1,*(undefined8 *)(param_1 + 0xbf8));
    if ((int)uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x6d0) = 0;
      *(undefined8 *)(param_1 + 0x1248) = *(undefined8 *)(param_1 + 0x6b0);
      *(ushort *)(param_1 + 0x15a4) =
           (ushort)((ulong)*(undefined8 *)(param_1 + 0xf40) >> 0x24) & 0x80 |
           *(ushort *)(param_1 + 0x15a4) & 0xff55;
      *(undefined4 *)(param_1 + 0x14e0) = 0;
      *(undefined8 *)(param_1 + 0x1268) = *(undefined8 *)(param_1 + 0x6b8);
      FUN_001ec308(*(undefined8 *)(param_1 + 0x1640));
      iVar1 = *(int *)(param_1 + 0xa38);
      *(undefined8 *)(param_1 + 0x1640) = 0;
      if ((iVar1 == 1) || (iVar1 == 6)) {
        *(undefined8 *)(param_1 + 0x1518) = 0;
      }
      else if (iVar1 == 5) {
        *(undefined8 *)(param_1 + 0x1518) = *(undefined8 *)(param_1 + 0x7d8);
      }
      else {
        *(long *)(param_1 + 0x1518) = *(long *)(param_1 + 0x6f8);
        if ((*(long *)(param_1 + 0x6f8) == -1) && (*(char **)(param_1 + 0x6e8) != (char *)0x0)) {
          sVar3 = strlen(*(char **)(param_1 + 0x6e8));
          *(size_t *)(param_1 + 0x1518) = sVar3;
        }
      }
      if (*(long *)(param_1 + 0xf58) != 0) {
        FUN_001c3ddc(param_1);
      }
      if ((*(long *)(param_1 + 0xf60) == 0) || (uVar2 = FUN_001c9794(param_1), (int)uVar2 == 0)) {
        *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) | 0x10;
        FUN_001c8080(param_1);
        FUN_001dac30(param_1);
        FUN_001dad88(param_1);
        *(ulong *)(param_1 + 0x1250) = *(ulong *)(param_1 + 0x1250) & *(ulong *)(param_1 + 0x1248);
        *(ulong *)(param_1 + 0x1270) = *(ulong *)(param_1 + 0x1270) & *(ulong *)(param_1 + 0x1268);
        if ((*(char *)(param_1 + 0x15a4) < '\0') &&
           ((*(int *)(param_1 + 0x15a8) == 0 && (iVar1 = FUN_001ec1a4(param_1 + 0x15a8), iVar1 != 0)
            ))) {
          uVar2 = 0x1b;
        }
        else {
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}


