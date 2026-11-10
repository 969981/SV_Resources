/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00263500; name: FUN_00263500
 */


void FUN_00263500(long *param_1,byte param_2)

{
  long lVar1;
  
  *param_1 = 0;
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x20);
  if (lVar1 != 0) {
                    /* try { // try from 0026352c to 00263537 has its CatchHandler @ 00263570 */
    FUN_00267c98(lVar1,0);
  }
  *param_1 = lVar1;
  if (*(int *)(lVar1 + 0x1c) != 2) {
                    /* try { // try from 00263548 to 0026354f has its CatchHandler @ 0026356c */
    FUN_002679fc(lVar1);
    *(undefined4 *)(lVar1 + 0x1c) = 2;
  }
  *(byte *)(lVar1 + 0x10) = param_2 & 1;
  return;
}


