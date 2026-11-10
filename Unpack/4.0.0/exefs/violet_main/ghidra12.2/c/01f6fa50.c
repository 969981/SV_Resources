/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6fa50; name: FUN_01f6fa50
 */


void FUN_01f6fa50(long *param_1,uint param_2)

{
  long lVar1;
  
  *param_1 = 0;
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x20);
  if (lVar1 != 0) {
                    /* try { // try from 01f6fa7c to 01f6fa87 has its CatchHandler @ 01f6fac0 */
    FUN_00267c98(lVar1,0);
  }
  *param_1 = lVar1;
  if (*(int *)(lVar1 + 0x1c) != 3) {
                    /* try { // try from 01f6fa98 to 01f6fa9f has its CatchHandler @ 01f6fabc */
    FUN_002679fc(lVar1);
    *(undefined4 *)(lVar1 + 0x1c) = 3;
  }
  *(ulong *)(lVar1 + 0x10) = (ulong)param_2;
  return;
}


