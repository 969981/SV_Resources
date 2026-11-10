/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fb6e0; name: FUN_007fb6e0
 */


void FUN_007fb6e0(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if ((char)param_2[1] == '\0') {
    FUN_007fc920(local_38);
    if (local_38[0] == 0) {
      FUN_007fcae0(local_48);
      FUN_018ff39c(local_38,local_48);
      if (local_38[0] == 0) {
        uVar1 = FUN_0078a12c();
        lVar2 = FUN_007bf9f0(0x14,uVar1);
        if (lVar2 != 0) {
          FUN_00792120(lVar2);
        }
        param_2[0x191] = lVar2;
        uVar1 = FUN_0078a12c();
        lVar2 = FUN_007bf9f0(0xf28,uVar1);
        if (lVar2 != 0) {
          FUN_0080fd00(lVar2);
        }
        param_2[4] = lVar2;
        FUN_007fca40(local_48);
        FUN_018ff39c(local_38,local_48);
        if (local_38[0] == 0) {
          *(undefined2 *)(param_2 + 1) = 1;
          local_48[0] = 0;
          local_28[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
          piVar3 = local_48;
          goto LAB_007fb7c8;
        }
      }
    }
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  else {
    local_38[0] = 0x10402;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  }
  piVar3 = local_38;
LAB_007fb7c8:
  FUN_00cbd7c0(param_1,piVar3);
  return;
}


