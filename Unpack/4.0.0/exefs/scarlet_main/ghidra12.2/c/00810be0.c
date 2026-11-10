/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00810be0; name: FUN_00810be0
 */


void FUN_00810be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined2 *param_5)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined4 local_d8 [4];
  undefined4 local_c8 [8];
  char *local_a8;
  char local_a0 [128];
  
  pcVar3 = (char *)FUN_00793098(param_3);
  lVar6 = 0;
  cVar2 = *pcVar3;
  pcVar1 = pcVar3;
  while (cVar2 != '\0') {
    local_a0[lVar6] = cVar2;
    if ((lVar6 == 0x7e) || (pcVar1[1] == '\0')) {
      pcVar1 = local_a0 + 1;
      goto LAB_00810c58;
    }
    local_a0[lVar6 + 1] = pcVar1[1];
    lVar6 = lVar6 + 2;
    pcVar1 = pcVar3 + lVar6;
    cVar2 = *pcVar1;
  }
  pcVar1 = local_a0;
LAB_00810c58:
  pcVar1[lVar6] = '\0';
  puVar4 = (undefined1 *)FUN_007c429c(local_a0,0x3a);
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = 0;
    uVar5 = strtol(puVar4 + 1,&local_a8,10);
    if ((uVar5 >> 0x10 == 0) && (*local_a8 == '\0')) {
      *param_5 = (short)uVar5;
      FUN_018dd540(local_c8,local_a0);
      (**(code **)(*param_4 + 0x10))(local_d8,param_4,local_c8);
      local_c8[0] = 0;
      goto LAB_00810cdc;
    }
  }
  local_c8[0] = 0x10407;
LAB_00810cdc:
  local_d8[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_c8 | 4),(Result *)local_d8);
  FUN_00cbd7c0(param_1,local_c8);
  return;
}


