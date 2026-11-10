/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e5f02c; name: FUN_01e5f02c
 */


uint FUN_01e5f02c(long param_1)

{
  long lVar1;
  uint uVar2;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_01e5f0dc(&local_48);
    lVar1 = local_48;
    uVar2 = 0;
    local_68 = local_48;
    uStack_60 = uStack_40;
    local_58 = local_38;
    local_50 = uStack_30;
    local_48 = 0;
    if ((lVar1 != 0) && (local_28 != 0)) {
      if (*(char *)(param_1 + 0x78) != '\0') {
        if (*(char *)(param_1 + 0x7c) != '\0') {
          *(undefined1 *)(param_1 + 0x7c) = 0;
        }
        *(undefined1 *)(param_1 + 0x78) = 0;
      }
      if (*(char *)(param_1 + 0x88) != '\0') {
        *(undefined1 *)(param_1 + 0x88) = 0;
      }
      uVar2 = FUN_01e5f2c8(*(undefined8 *)(param_1 + 0x58),
                           "https://v3-%.vp.n.srv.nintendo.net/v1/validate",lVar1,local_28,0x1e);
    }
    FUN_01e5f508(&local_68);
    FUN_01e5f508(&local_48);
  }
  return uVar2 & 1;
}


