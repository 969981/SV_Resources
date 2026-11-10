/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027b763c; name: FUN_027b763c
 */


void FUN_027b763c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [144];
  
  FUN_01d01ed8(auStack_f0);
  FUN_027b9884((ulong)auStack_f0 | 8,param_3 + 8);
  FUN_027b98e4(auStack_e0,param_3 + 0x10);
  local_100 = 0;
  uStack_f8 = 0;
  FUN_027b9918(param_1,param_2,auStack_f0,param_4,&local_100,param_5);
  FUN_01e7396c(auStack_e0);
  FUN_01e73a10((ulong)auStack_f0 | 8);
  FUN_01cfa410(auStack_f0);
  return;
}


