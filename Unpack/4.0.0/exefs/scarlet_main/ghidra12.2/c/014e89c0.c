/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e89c0; name: FUN_014e89c0
 */


void FUN_014e89c0(long param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x19c) == '\0') {
    uVar4 = *(uint *)(param_1 + 0x108);
    if (2 < uVar4) {
      uVar4 = 3;
    }
    lVar2 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),uVar4);
    if ((lVar2 != 0) && (FUN_01195974(param_1), *(int *)(param_1 + 0x108) == 0)) {
      local_50 = 0x89f5cbcc65ae0e8a;
      pcStack_48 = "L_cursorover_popup_00";
      local_40 = 0x15;
      uStack_38 = 0;
      lVar2 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_50);
      if ((param_2 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0x1e0) != '\0';
      }
      bVar3 = *(byte *)(lVar2 + 0x58) & 0xfe | bVar1;
      goto LAB_014e8a98;
    }
  }
  local_50 = 0x89f5cbcc65ae0e8a;
  pcStack_48 = "L_cursorover_popup_00";
  local_40 = 0x15;
  uStack_38 = 0;
  lVar2 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_50);
  bVar3 = *(byte *)(lVar2 + 0x58) & 0xfe;
LAB_014e8a98:
  *(byte *)(lVar2 + 0x58) = bVar3;
  return;
}


