/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027c1f04; name: FUN_027c1f04
 */


void FUN_027c1f04(undefined1 *param_1,long param_2,byte param_3)

{
  char *__s;
  byte bVar1;
  size_t sVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  
  if ((param_3 < 0x18) && (uVar5 = (ulong)param_3, *(char *)(param_2 + uVar5 * 0x30 + 0x80) != '\0')
     ) {
    lVar7 = param_2 + uVar5 * 0x30;
    __s = (char *)(lVar7 + 0x88);
    puVar6 = &DAT_cbf29ce484222645;
    sVar2 = strlen(__s);
    bVar1 = *(byte *)(lVar7 + 0x88);
    if (bVar1 != 0) {
      pbVar4 = (byte *)(param_2 + uVar5 * 0x30 + 0x89);
      do {
        puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    uVar3 = *(undefined8 *)(param_2 + uVar5 * 0x30 + 0xa8);
    *(undefined1 **)(param_1 + 8) = puVar6;
    *(char **)(param_1 + 0x10) = __s;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(size_t *)(param_1 + 0x18) = sVar2;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  return;
}


