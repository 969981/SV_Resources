/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003dea70; name: FUN_003dea70
 */


undefined * FUN_003dea70(undefined8 *param_1,char *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  undefined *puVar5;
  char *__s;
  long lVar6;
  
  if (param_3 == -1) {
    sVar3 = strlen(param_2);
    param_3 = (int)sVar3;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
  }
  if (DAT_047f1800 == 0) {
    uVar4 = 0x14;
  }
  else {
    iVar2 = FUN_0047e430();
    if (iVar2 < -0x13) {
      return (undefined *)0x0;
    }
    uVar4 = (ulong)(iVar2 + 0x14);
  }
  lVar6 = uVar4 + 1;
  do {
    iVar2 = (int)uVar4;
    uVar4 = (ulong)(iVar2 - 1);
    if (iVar2 < 0x15) {
      puVar5 = (&PTR_DAT_044a1c48)[uVar4];
      bVar1 = puVar5[8];
    }
    else {
      puVar5 = (undefined *)FUN_0047e450(DAT_047f1800,iVar2 + -0x15);
      bVar1 = puVar5[8];
    }
    if ((bVar1 & 1) == 0) {
      __s = *(char **)(puVar5 + 0x10);
      sVar3 = strlen(__s);
      if ((param_3 == (int)sVar3) && (iVar2 = strncasecmp(__s,param_2,(long)param_3), iVar2 == 0)) {
        return puVar5;
      }
    }
    lVar6 = lVar6 + -1;
    if (lVar6 < 2) {
      return (undefined *)0x0;
    }
  } while( true );
}


