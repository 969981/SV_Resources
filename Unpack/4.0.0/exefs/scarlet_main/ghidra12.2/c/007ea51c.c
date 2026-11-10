/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ea51c; name: FUN_007ea51c
 */


void FUN_007ea51c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x1800);
  if (0 < (int)*(uint *)(param_1 + 0x1800)) {
    lVar2 = param_1 + 0x10;
    do {
      *(undefined8 *)(lVar2 + -0xc) = 0;
      uVar1 = uVar1 - 1;
      *(undefined8 *)(lVar2 + -4) = 0;
      *(undefined8 *)(lVar2 + 4) = 0;
      *(undefined4 *)(lVar2 + 0xc) = 0;
      lVar2 = lVar2 + 0x30;
    } while (uVar1 != 0);
  }
  *(undefined8 *)(param_1 + 0x1840) = 0;
  *(undefined8 *)(param_1 + 0x18a0) = 0;
  *(undefined8 *)(param_1 + 0x1848) = 0;
  *(undefined8 *)(param_1 + 0x18a8) = 0;
  *(undefined8 *)(param_1 + 0x1850) = 0;
  *(undefined8 *)(param_1 + 0x18b0) = 0;
  *(undefined8 *)(param_1 + 0x1858) = 0;
  *(undefined8 *)(param_1 + 0x18b8) = 0;
  *(undefined8 *)(param_1 + 0x1860) = 0;
  *(undefined8 *)(param_1 + 0x18c0) = 0;
  *(undefined8 *)(param_1 + 0x1868) = 0;
  *(undefined8 *)(param_1 + 0x18c8) = 0;
  *(undefined8 *)(param_1 + 0x1870) = 0;
  *(undefined8 *)(param_1 + 0x18d0) = 0;
  *(undefined8 *)(param_1 + 0x1878) = 0;
  *(undefined8 *)(param_1 + 0x18d8) = 0;
  *(undefined4 *)(param_1 + 0x1880) = 0;
  *(undefined4 *)(param_1 + 0x18e0) = 0;
  *(undefined8 *)(param_1 + 0x1884) = 0;
  *(undefined8 *)(param_1 + 0x18e4) = 0;
  *(undefined4 *)(param_1 + 0x188c) = 0;
  *(undefined4 *)(param_1 + 0x18ec) = 0;
  *(undefined8 *)(param_1 + 0x1890) = 0;
  *(undefined8 *)(param_1 + 0x18f0) = 0;
  *(undefined8 *)(param_1 + 0x1898) = 0;
  *(undefined8 *)(param_1 + 0x18f8) = 0;
  *(undefined4 *)(param_1 + 0x1804) = 0;
  *(undefined8 *)(param_1 + 0x1828) = 0;
  *(undefined8 *)(param_1 + 0x1830) = 0;
  *(undefined8 *)(param_1 + 0x1838) = 0;
  return;
}


