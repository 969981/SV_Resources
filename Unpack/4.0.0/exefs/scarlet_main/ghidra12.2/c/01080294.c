/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01080294; name: FUN_01080294
 */


ulong FUN_01080294(undefined2 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  switch(param_1) {
  case 1:
    if ((*(char *)((long)param_2 + 0x1a) == '\x04') && (*(short *)((long)param_2 + 0x1c) == 0x6a)) {
      return 1;
    }
    break;
  case 2:
    uVar3 = FUN_0293d160(param_2);
    return uVar3;
  case 3:
    uVar3 = FUN_0293d210(param_2);
    return uVar3;
  case 4:
    uVar3 = FUN_0293d4a0(param_2);
    return uVar3;
  case 5:
    uVar3 = FUN_0293d520(param_2);
    return uVar3;
  case 6:
    if ((*(char *)((long)param_2 + 0x1a) == '\x02') && (*(ushort *)((long)param_2 + 0x1c) < 0x12)) {
      return (ulong)(0x20003U >> (ulong)(*(ushort *)((long)param_2 + 0x1c) & 0x1f) & 1);
    }
    break;
  case 7:
    if ((*(char *)((long)param_2 + 0x1a) == '\x05') &&
       (iVar1 = *(int *)(param_2 + 4), iVar2 = FUN_010803c8(param_2[2]), iVar1 == iVar2)) {
      lVar4 = FUN_01a7a6e0(*param_2,*(undefined2 *)((long)param_2 + 0x1c));
      if (lVar4 == -0x2bd61bbdbc5d48a) {
        return 1;
      }
      if (lVar4 == 0x8e01121dfc5148f) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}


