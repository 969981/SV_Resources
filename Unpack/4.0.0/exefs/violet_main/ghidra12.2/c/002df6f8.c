/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002df6f8; name: FUN_002df6f8
 */


void FUN_002df6f8(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  ostream *this;
  char *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 *__dest;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auStack_190 [8];
  ostream aoStack_188 [256];
  undefined8 local_88 [5];
  
  uVar10 = 0;
  while (cVar3 = *param_1, cVar3 == '\x05') {
    if (uVar10 < 4) {
      local_88[uVar10 + 1] = param_1;
      uVar10 = uVar10 + 1;
    }
    pcVar6 = param_1 + 8;
    if (1 < *(ushort *)(param_1 + 6)) {
      pcVar6 = *(char **)pcVar6;
    }
    param_1 = *(char **)pcVar6;
  }
  if (cVar3 != '\x03') {
    if (cVar3 != '\x04') goto joined_r0x002df7f0;
    iVar1 = *(int *)(param_1 + 0x18);
    uVar5 = iVar1 - param_2;
    if (uVar5 != 0 && param_2 <= iVar1) {
      if (iVar1 + -1 == param_2) {
        lVar7 = *(long *)(param_1 + 0x20);
        uVar2 = *(undefined4 *)(lVar7 + (long)param_2 * 4);
        if (lVar7 != 0) {
          FUN_0049e800(lVar7);
          FUN_0049e7e0(PTR_LAB_047cba48,lVar7);
        }
        param_1[0x20] = '\0';
        param_1[0x21] = '\0';
        param_1[0x22] = '\0';
        param_1[0x23] = '\0';
        param_1[0x24] = '\0';
        param_1[0x25] = '\0';
        param_1[0x26] = '\0';
        param_1[0x27] = '\0';
        *(undefined4 *)(param_1 + 0x18) = uVar2;
        *param_1 = '\x03';
      }
      else {
        *(uint *)(param_1 + 0x18) = uVar5;
        memmove(*(void **)(param_1 + 0x20),
                (void *)((long)*(void **)(param_1 + 0x20) + (long)param_2 * 4),
                -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2);
      }
      goto joined_r0x002df7f0;
    }
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 != 0) {
      FUN_0049e800(lVar7);
      FUN_0049e7e0(PTR_LAB_047cba48,lVar7);
    }
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
  }
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  *param_1 = '\x02';
joined_r0x002df7f0:
  if (uVar10 != 0) {
    do {
      puVar8 = (undefined1 *)local_88[uVar10];
      __dest = (undefined8 *)(puVar8 + 8);
      if (1 < *(ushort *)(puVar8 + 6)) {
        __dest = (undefined8 *)*__dest;
      }
      if (*(char *)*__dest == '\x02') {
        FUN_002e4804();
        *__dest = 0;
        uVar4 = *(ushort *)(puVar8 + 6);
        if (uVar4 < 2) {
          FUN_002cc810(auStack_190,"external/com_github_google_re2/re2/parse.cc",0x34f);
                    /* try { // try from 002df894 to 002df8ab has its CatchHandler @ 002df91c */
          this = std::__put_character_sequence<char,std::char_traits<char>>
                           (aoStack_188,"Concat of ",10);
          std::ostream::operator<<(this,(uint)*(ushort *)(puVar8 + 6));
          FUN_002cc97c(auStack_190);
          *(undefined8 *)(puVar8 + 8) = 0;
          *puVar8 = 2;
        }
        else if (uVar4 == 2) {
          uVar9 = __dest[1];
          __dest[1] = 0;
          FUN_002e5584(puVar8,uVar9);
          FUN_002e4804(uVar9);
        }
        else {
          *(ushort *)(puVar8 + 6) = uVar4 - 1;
          memmove(__dest,__dest + 1,(ulong)(ushort)(uVar4 - 1) << 3);
        }
      }
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}


