/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078bb44; name: FUN_0078bb44
 */


void FUN_0078bb44(int *param_1,long param_2,char *param_3)

{
  char *param3;
  int iVar1;
  char *pcVar2;
  undefined4 local_140 [4];
  char local_130 [256];
  undefined4 local_28 [2];
  
  pcVar2 = (char *)local_140;
  if (*(char *)(param_2 + 0x5a9) == '\0') {
    param3 = "g2122d301";
    if (param_3 != (char *)0x0) {
      param3 = param_3;
    }
    iVar1 = snprintf(local_130,0x100,"%s.%%.p.srv.nintendo.net",param3);
    if ((*PTR_DAT_047d08d8 != '\0') && (iVar1 - 1U < 0xff)) {
      FUN_0078d160(param_1,param_2 + 0xb8,local_130,param_2 + 0x588,param_2);
      if (*param_1 != 0) {
        return;
      }
      FUN_0078cd58(param_2 + 0xb8,1);
    }
    *(undefined1 *)(param_2 + 0x5a9) = 1;
    local_140[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_140 | 4),(Result *)local_28);
  }
  else {
    local_130[0] = '\0';
    local_130[1] = '\0';
    local_130[2] = '\0';
    local_130[3] = '\0';
    local_140[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_130 | 4),(Result *)local_140);
    pcVar2 = local_130;
  }
  FUN_00cbd7c0(param_1,pcVar2);
  return;
}


