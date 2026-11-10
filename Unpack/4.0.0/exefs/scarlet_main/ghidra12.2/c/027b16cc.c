/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027b16cc; name: FUN_027b16cc
 */


void FUN_027b16cc(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  long local_28;
  
  if (*param_2 == 0) {
    local_28 = 0;
LAB_027b174c:
    local_48 = 0xf9ea7befe95aa249;
    pcStack_40 = "NoSessionInstance";
    local_38 = 0x11;
    local_30 = (long *)0x0;
    FUN_01ee2ff0(param_1,&local_48,&DAT_03d68958);
    plVar1 = local_30;
  }
  else {
    FUN_0278e618(&local_28);
    if (local_28 == 0) goto LAB_027b174c;
    if ((char)param_2[2] == '\0') {
      FUN_0186e318(param_1);
      goto LAB_027b178c;
    }
    local_68 = 0x9efe9b28ced58894;
    pcStack_60 = "KeepSession";
    local_58 = 0xb;
    local_50 = (long *)0x0;
    FUN_01987400(param_1,&local_68,&DAT_03d68958);
    plVar1 = local_50;
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
LAB_027b178c:
  FUN_0278e884(&local_28);
  return;
}


