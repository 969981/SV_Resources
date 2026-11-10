/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033832c; name: FUN_0033832c
 */


undefined8 FUN_0033832c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  char *__s;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [32];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = FUN_00338d08(param_1 + 0xa0);
  if (lVar2 == 0) {
    uStack_38 = param_2[1];
    local_40 = *param_2;
    uStack_28 = param_2[3];
    uStack_30 = param_2[2];
    __s = (char *)FUN_00366f90(&local_40);
    pcVar3 = strrchr(__s,0x2f);
    pcVar3[1] = '\0';
                    /* try { // try from 00338378 to 00338383 has its CatchHandler @ 003383cc */
    FUN_003673f0(auStack_60,__s);
                    /* try { // try from 00338384 to 0033838f has its CatchHandler @ 003383c8 */
    lVar2 = FUN_00338d08(param_1 + 0xa0,auStack_60);
    puVar1 = (undefined8 *)(param_1 + 200);
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(lVar2 + 0x30);
    }
    uVar4 = *puVar1;
    if (__s != (char *)0x0) {
                    /* try { // try from 003383a8 to 003383af has its CatchHandler @ 003383c4 */
      free(__s);
    }
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
  }
  return uVar4;
}


