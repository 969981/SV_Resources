/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b6420; name: FUN_003b6420
 */


undefined * FUN_003b6420(uint *param_1,char *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  
  if (param_2 != (char *)0x0) {
    uVar1 = *param_1;
    uVar3 = uVar1 >> 5 & 1;
    lVar6 = 0;
    puVar5 = &DAT_044a0488;
    if ((uVar1 >> 3 & 1) == 0) {
      do {
        uVar2 = *(ushort *)((long)&DAT_044a04a0 + lVar6);
        if (((uVar2 >> 3 & 1) == 0) &&
           ((((uVar1 >> 2 & 1) != 0 || ((uVar2 >> 2 & 1) == 0)) &&
            (((uVar2 >> 5 ^ 0xffff) & 1) != 0 || uVar3 != 0)))) {
          if ((((uVar1 & 1) != 0) &&
              (*(char **)((long)&PTR_s_no_ssl3_044a0498 + lVar6) != (char *)0x0)) &&
             (iVar4 = strcmp(*(char **)((long)&PTR_s_no_ssl3_044a0498 + lVar6),param_2), iVar4 == 0)
             ) {
            return puVar5;
          }
          if ((((uVar1 >> 1 & 1) != 0) && (*(char **)((long)&DAT_044a0490 + lVar6) != (char *)0x0))
             && (iVar4 = strcasecmp(*(char **)((long)&DAT_044a0490 + lVar6),param_2), iVar4 == 0)) {
            return &DAT_044a0488 + lVar6;
          }
        }
        lVar6 = lVar6 + 0x20;
        puVar5 = puVar5 + 0x20;
      } while (lVar6 != 0x600);
    }
    else if ((uVar1 >> 2 & 1) == 0) {
      do {
        if (((*(ushort *)((long)&DAT_044a04a0 + lVar6) >> 2 & 1) == 0) &&
           (((*(ushort *)((long)&DAT_044a04a0 + lVar6) >> 5 ^ 0xffff) & 1) != 0 || uVar3 != 0)) {
          if (((uVar1 & 1) != 0) &&
             ((*(char **)((long)&PTR_s_no_ssl3_044a0498 + lVar6) != (char *)0x0 &&
              (iVar4 = strcmp(*(char **)((long)&PTR_s_no_ssl3_044a0498 + lVar6),param_2), iVar4 == 0
              )))) {
            return &DAT_044a0488 + lVar6;
          }
          if ((((uVar1 >> 1 & 1) != 0) && (*(char **)((long)&DAT_044a0490 + lVar6) != (char *)0x0))
             && (iVar4 = strcasecmp(*(char **)((long)&DAT_044a0490 + lVar6),param_2), iVar4 == 0)) {
            return puVar5;
          }
        }
        lVar6 = lVar6 + 0x20;
        puVar5 = puVar5 + 0x20;
      } while (lVar6 != 0x600);
    }
    else {
      do {
        if (uVar3 != 0 || ((*(ushort *)((long)&DAT_044a04a0 + lVar6) >> 5 ^ 0xffff) & 1) != 0) {
          if ((((uVar1 & 1) != 0) &&
              (*(char **)((long)&PTR_s_no_ssl3_044a0498 + lVar6) != (char *)0x0)) &&
             (iVar4 = strcmp(*(char **)((long)&PTR_s_no_ssl3_044a0498 + lVar6),param_2), iVar4 == 0)
             ) {
            return &DAT_044a0488 + lVar6;
          }
          if ((((uVar1 >> 1 & 1) != 0) && (*(char **)((long)&DAT_044a0490 + lVar6) != (char *)0x0))
             && (iVar4 = strcasecmp(*(char **)((long)&DAT_044a0490 + lVar6),param_2), iVar4 == 0)) {
            return puVar5;
          }
        }
        lVar6 = lVar6 + 0x20;
        puVar5 = puVar5 + 0x20;
      } while (lVar6 != 0x600);
    }
  }
  return (undefined *)0x0;
}


