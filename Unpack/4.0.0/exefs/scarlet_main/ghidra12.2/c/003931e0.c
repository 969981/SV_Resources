/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003931e0; name: FUN_003931e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003931e0(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  void *__dest;
  byte bVar5;
  size_t sVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 local_90;
  size_t sStack_88;
  char *local_80;
  char local_70 [32];
  
  uVar4 = *(uint *)(param_2 + 8);
  uVar3 = *(uint *)(param_2 + 4) & ((int)*(uint *)(param_2 + 4) >> 0x1f ^ 0xffffffffU);
  local_70[0] = '%';
  if ((int)uVar4 < 0) {
    uVar4 = 0xffffffff;
  }
  FUN_00391bbc(&local_90,param_2 + 1);
  pcVar8 = (void *)((ulong)&local_90 | 1);
  sVar6 = (ulong)((byte)local_90 >> 1);
  if (((byte)local_90 & 1) != 0) {
    pcVar8 = local_80;
    sVar6 = sStack_88;
  }
  memcpy((void *)((ulong)local_70 | 1),pcVar8,sVar6);
  puVar2 = (undefined2 *)((long)((ulong)local_70 | 1) + sVar6);
  if (((byte)local_90 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_80);
  }
  *(undefined1 *)(puVar2 + 1) = 0x2a;
  *puVar2 = 0x2e2a;
  uVar9 = 99;
  switch(*param_2) {
  case 0:
    break;
  case 1:
    uVar9 = 0x43;
    break;
  case 2:
    uVar9 = 0x73;
    break;
  case 3:
    uVar9 = 0x53;
    break;
  case 4:
    uVar9 = 100;
    break;
  case 5:
    uVar9 = 0x69;
    break;
  case 6:
    uVar9 = 0x6f;
    break;
  case 7:
    uVar9 = 0x75;
    break;
  case 8:
    uVar9 = 0x78;
    break;
  case 9:
    uVar9 = 0x58;
    break;
  case 10:
    uVar9 = 0x66;
    break;
  case 0xb:
    uVar9 = 0x46;
    break;
  case 0xc:
    uVar9 = 0x65;
    break;
  case 0xd:
    uVar9 = 0x45;
    break;
  case 0xe:
    uVar9 = 0x67;
    break;
  case 0xf:
    uVar9 = 0x47;
    break;
  case 0x10:
    uVar9 = 0x61;
    break;
  case 0x11:
    uVar9 = 0x41;
    break;
  case 0x12:
    uVar9 = 0x6e;
    break;
  case 0x13:
    uVar9 = 0x70;
    break;
  default:
    uVar9 = 0;
  }
  *(undefined1 *)((long)puVar2 + 3) = uVar9;
  *(undefined1 *)(puVar2 + 2) = 0;
  pcVar8 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x210);
  sStack_88 = _UNK_03cab8a8;
  local_90 = _DAT_03cab8a0;
  local_80 = pcVar8;
  memset(pcVar8,0,0x201);
  uVar7 = snprintf(pcVar8,0x200,local_70,param_1,(ulong)uVar3,(ulong)uVar4);
  if (-1 < (int)uVar7) {
    do {
      if ((local_90 & 1) == 0) {
        bVar5 = (byte)local_90 >> 1;
        pcVar8 = (char *)((ulong)&local_90 | 1);
        if (uVar7 < bVar5) {
LAB_003934a0:
          if (uVar7 != 0) {
            uVar12 = (ulong)uVar7;
            __dest = (void *)param_3[3];
            param_3[2] = param_3[2] + uVar12;
            if (uVar12 < (ulong)((long)param_3 + (0x420 - (long)__dest))) {
              memcpy(__dest,pcVar8,uVar12);
              param_3[3] = param_3[3] + uVar12;
            }
            else {
              puVar1 = param_3 + 4;
                    /* try { // try from 003934ec to 00393507 has its CatchHandler @ 00393518 */
              (*(code *)param_3[1])(*param_3,puVar1,(long)__dest - (long)puVar1);
              param_3[3] = puVar1;
              (*(code *)param_3[1])(*param_3,pcVar8,uVar12);
            }
          }
          uVar11 = 1;
          if ((local_90 & 1) == 0) {
            return 1;
          }
          goto LAB_00393468;
        }
        uVar12 = (long)(int)uVar7 + 1;
        uVar10 = (ulong)bVar5;
        if (bVar5 < uVar12) {
LAB_003933b4:
                    /* try { // try from 003933b8 to 003933c3 has its CatchHandler @ 0039351c */
          FUN_002ce498(&local_90,uVar12 - uVar10,0);
        }
        else {
          local_70[(long)(int)uVar7 + -0x1e] = '\0';
          local_90 = CONCAT71(local_90._1_7_,(char)((int)uVar12 << 1));
        }
      }
      else {
        if (uVar7 < sStack_88) {
          pcVar8 = local_80;
          goto LAB_003934a0;
        }
        uVar12 = (long)(int)uVar7 + 1;
        uVar10 = sStack_88;
        if (sStack_88 < uVar12) goto LAB_003933b4;
        local_80[uVar12] = '\0';
        sStack_88 = uVar12;
      }
      pcVar8 = (char *)((ulong)&local_90 | 1);
      sVar6 = local_90 >> 1 & 0x7f;
      if ((local_90 & 1) != 0) {
        pcVar8 = local_80;
        sVar6 = sStack_88;
      }
      uVar7 = snprintf(pcVar8,sVar6,local_70,param_1,(ulong)uVar3,(ulong)uVar4);
    } while (-1 < (int)uVar7);
  }
  uVar11 = 0;
  if ((local_90 & 1) != 0) {
LAB_00393468:
    FUN_0049e790(PTR_LAB_047cba48,local_80);
  }
  return uVar11;
}


